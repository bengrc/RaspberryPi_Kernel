cmd_fs/squashfs/squashfs.o := arm-linux-gnueabihf-ld  -EL    -r -o fs/squashfs/squashfs.o fs/squashfs/block.o fs/squashfs/cache.o fs/squashfs/dir.o fs/squashfs/export.o fs/squashfs/file.o fs/squashfs/fragment.o fs/squashfs/id.o fs/squashfs/inode.o fs/squashfs/namei.o fs/squashfs/super.o fs/squashfs/symlink.o fs/squashfs/decompressor.o fs/squashfs/file_cache.o fs/squashfs/decompressor_single.o fs/squashfs/xattr.o fs/squashfs/xattr_id.o fs/squashfs/lzo_wrapper.o fs/squashfs/xz_wrapper.o fs/squashfs/zlib_wrapper.o 
