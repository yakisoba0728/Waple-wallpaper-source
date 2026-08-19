// Function: FUN_1404c520c
// Addr: 1404c520c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c520c(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *in_RAX;
  int unaff_ESI;
  undefined4 unaff_00000034;
  
  *in_RAX = *in_RAX + (char)((ulonglong)in_RAX >> 8);
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> 1;
  bVar2 = (byte)in_RAX;
  in_RAX[0x14] = in_RAX[0x14] + bVar2;
  bVar1 = *in_RAX;
  *in_RAX = *in_RAX + bVar2;
  *param_1 = (*param_1 - unaff_ESI) - (uint)CARRY1(bVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

