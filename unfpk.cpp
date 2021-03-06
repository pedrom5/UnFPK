// unfpk.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "IOUtils.h"

#include "CFpkUnpacker.h"


int main( int argc, char* argv[] )
{
	std::map<std::string, std::string> vecFpkFiles;
	std::map<std::string, std::string> vecPftxsFiles;

	if ( argc != 5
		 || strcmp( argv[ 1 ], "-i" ) != 0
		 || strcmp( argv[ 3 ], "-o" ) != 0 )
	{
		printf( "usage: %s -i [GameDirectory] -o [OutputDirectory]\n",
				argv[ 0 ] );

		return -1;
	}

	const char* prgcGameDir = argv[ 2 ],
		*prgcOutDir = argv[ 4 ];

	SearchGameForFileExt( prgcGameDir, ".fpk", vecFpkFiles );
	SearchGameForFileExt( prgcGameDir, ".fpkd", vecFpkFiles );
	SearchGameForFileExt( prgcGameDir, ".pftxs", vecPftxsFiles );

	CFpkUnpacker* pFpkUnpacker = new CFpkUnpacker();

	for ( const auto & entry : vecFpkFiles )
	{
		pFpkUnpacker->Unpack( entry.second.c_str(), prgcOutDir );
	}

	return 0;
}

