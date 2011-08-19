/* DYN76.C      (c) Copyright Harold Grovesteen, 2010-2011           */
/*              Diagnose Instr for file transfers                    */
/*                                                                   */
/*   Released under "The Q Public License Version 1"                 */
/*   (http://www.hercules-390.org/herclic.html) as modifications to  */
/*   Hercules.                                                       */

    logmsg("DF18: AddFKByID added id=%d at %X with next item at %X to list head=%X at %X\n",
    logmsg("DF18: FindFK id=%d in list head at=%X\n", id, list);
    logmsg("DF18: FindFK list head points to first entry at %X\n", fk);
        logmsg("DF18: FindFK id=%d (0x%X) is at: %X\n", fk->id, fk->id, fk);
    logmsg("DF18: RemoveFKByID id %d from list head at=%X\n", id, list);
        logmsg("DF18: RemoveFKByID id=%d (0x%X) is at: %X\n", fk->id, fk->id, fk);
                logmsg("DF18: RemoveFKByID freeing id=%d at: %X\n", fk->id, fk);
        logmsg("DF18: CFILE - orphan _close(%d)\n", fk->handle);
            logmsg("DF18: CFILE - orphan _close result: %d\n", i);
            logmsg("DF18: CFILE - orphan _close errno: %d\n", i);
    logmsg("DF18: CFILE Validating FOCPB Address %X\n", cmpb);
    logmsg("DF18: CFILE Validated FOCPB Address\n");
        logmsg("DF18: CFILE - looking for guest file descriptor %d\n", ghandle);
        logmsg("DF18: CFILE - guest file descriptor %d found at %X\n",
            logmsg("DF18: CFILE - guest file descriptor not found: %d\n", ghandle);
        logmsg("DF18: CFILE - host file handle: %d\n", handle);
        logmsg("DF18: CFILE - setmode file operation\n");
        logmsg("DF18: CFILE - _close(%d)\n", handle);
        logmsg("DF18: CFILE - _close result: %d\n", res);
        logmsg("DF18: CFILE - commit file operation\n");
        logmsg("DF18: CFILE - _commit(%d)\n", handle);
        logmsg("DF18: CFILE - _commit result: %d\n", res);
        logmsg("DF18: CFILE - fsync(%d)\n", handle);
        logmsg("DF18: CFILE - fsync result: %d \n", res);
        logmsg("DF18: CFILE - fsync/_commit errno: %d \n", res);
        logmsg("DF18: CFILE - seek\n");
        logmsg("DF18: CFILE - _lseek(%d, %d, %d)\n", handle, (long)R3, (int)R4);
        logmsg("DF18: CFILE - _lseek result: %d\n", res);
            logmsg("DF18: CFILE - _lseek errno: %d\n", res);
        logmsg("DF18: CFILE - adding restart fkeeper to rst_head list\n");
        logmsg("DF18: CFILE - rename\n");
        logmsg("DF18: CFILE - rename(from='%s',to='%s')\n",
        logmsg("DF18: CFILE - rename result: %d\n", res);
        logmsg("DF18: CFILE - rename errno: %d\n", res);
        logmsg("DF18: CFILE - unlink\n");
        logmsg("DF18: CFILE - _unkink('%s')\n", rfk->filename);
        logmsg("DF18: CFILE - _unlink result: %d\n", res);
        logmsg("DF18: CFILE - remove('%s')\n", rfk->filename);
        logmsg("DF18: CFILE - remove result: %d\n", res);
            logmsg("DF18: CFILE - remove/_unlink errno: %d\n", res);
        logmsg("DF18: CFILE - open\n");
        logmsg("DF18: CFILE - _open('%s', 0x%X, 0%o)\n", rfk->filename, i, R4);
        logmsg("DF18: CFILE - _open result: %d\n", res);
            logmsg("DF18: CFILE - removing  w/o freeing fkeeper from restart list rst_head\n");
            logmsg("DF18: CFILE - adding fkeeper to open file list with fkpr_head\n");
            logmsg("DF18: CFILE - opened guest file descriptor %d, host handle: %d\n",
            logmsg("DF18: CFILE - _open errno: %X\n", res);
        logmsg("DF18: CFILE - orphan close: '%s'\n", rfk->filename);
        logmsg("DF18: CFILE - read\n");
        logmsg("DF18: CFILE - read requested bytes: %d\n", R4);
                logmsg("DF18: CFILE - host read result: %d\n", rfk->data);
        logmsg("DF18: CFILE - write\n");
            logmsg("DF18: CFILE - _write(%d, rfk->filename, %d)\n", handle, i);
            logmsg("DF18: CFILE - _write result: %d\n", res);
                logmsg("DF18: CFILE - write errno: %d\n", io_error);
        logmsg("DF18: CFILE - removing and freeing restart fkeeper in rst_head list\n");