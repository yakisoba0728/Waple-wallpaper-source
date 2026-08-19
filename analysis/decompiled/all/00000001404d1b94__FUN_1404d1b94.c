// Function: FUN_1404d1b94
// Addr: 1404d1b94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1b94(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 in_RAX;
  int *unaff_RDI;
  byte in_CF;
  int iVar5;
  
  bVar1 = (byte)in_RAX + *param_1;
  uVar2 = (uint)(CARRY1((byte)in_RAX,*param_1) || CARRY1(bVar1,in_CF));
  iVar5 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1 + in_CF);
  iVar3 = iVar5 + -0x9f00b00;
  iVar4 = iVar3 - uVar2;
  if (param_1 != (byte *)0x1 && iVar4 != 0) {
    *unaff_RDI = *unaff_RDI + iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SBORROW4(iVar5,0x9f00b00) == SBORROW4(iVar3,uVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

