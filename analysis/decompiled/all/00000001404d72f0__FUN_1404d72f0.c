// Function: FUN_1404d72f0
// Addr: 1404d72f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d7307) */

void FUN_1404d72f0(byte param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar3;
  uint *in_RAX;
  longlong lVar2;
  char *unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  lVar2 = CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                   CONCAT11(bVar3 + (byte)param_2,(char)in_RAX)) >> 8),
                   (char)in_RAX - CARRY1(bVar3,(byte)param_2));
  *unaff_RDI = *unaff_RDI + (char)((ulonglong)param_2 >> 8);
  unaff_RDI[lVar2] = unaff_RDI[lVar2] & param_1;
  uVar1 = (uint)lVar2 ^ 0xdc00384d;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

