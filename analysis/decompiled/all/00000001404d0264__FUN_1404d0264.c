// Function: FUN_1404d0264
// Addr: 1404d0264
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0264(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined6 uVar2;
  
  uVar2 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar1 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(param_2 + param_1);
  *(char *)CONCAT62(uVar2,CONCAT11(bVar1,(char)param_2)) =
       *(char *)CONCAT62(uVar2,CONCAT11(bVar1,(char)param_2)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

