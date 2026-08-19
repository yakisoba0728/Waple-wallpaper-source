// Function: FUN_1404be6fc
// Addr: 1404be6fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be6fc(longlong param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  longlong in_RAX;
  longlong unaff_RDI;
  byte in_CF;
  
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  bVar2 = bVar3 - *(byte *)(in_RAX + param_1);
  piVar1 = (int *)(unaff_RDI +
                  CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar2 - in_CF,(char)in_RAX)));
  *piVar1 = *piVar1 + param_2 + (uint)(bVar3 < *(byte *)(in_RAX + param_1) || bVar2 < in_CF);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

