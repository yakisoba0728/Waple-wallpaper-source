// Function: FUN_1404a2324
// Addr: 1404a2324
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2324(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 in_RAX;
  
  bVar1 = ((char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_2 >> 8)) * '\x02' +
          (char)param_2;
  *(char *)(param_2 + param_1) =
       *(char *)(param_2 + param_1) +
       (bVar1 | (byte)((uint)*(undefined4 *)
                              CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                       CONCAT11(bVar1,(char)in_RAX)) >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

