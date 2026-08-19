// Function: FUN_1404ae9ac
// Addr: 1404ae9ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae9ac(char *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  longlong in_RAX;
  char *pcVar3;
  undefined4 *unaff_RBX;
  char unaff_SPL;
  byte *unaff_RDI;
  longlong in_FS_OFFSET;
  
  uVar2 = *unaff_RBX;
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + (byte)in_RAX;
  pcVar3 = (char *)CONCAT71((uint7)(uint3)((int)in_RAX + *(int *)(in_FS_OFFSET + in_RAX) +
                                           (uint)CARRY1(bVar1,(byte)in_RAX) >> 8),0xe8);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar3 = *pcVar3 + -0x18;
  pcVar3[99] = pcVar3[99] + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

