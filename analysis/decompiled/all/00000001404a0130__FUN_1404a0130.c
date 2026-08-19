// Function: FUN_1404a0130
// Addr: 1404a0130
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a017a) */

void FUN_1404a0130(char param_1,byte param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *in_RAX;
  byte unaff_BL;
  char unaff_SPL;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  
  bRam000000012df20139 = bRam000000012df20139 ^ unaff_BL;
  *param_4 = *param_4 + unaff_SPL;
  *in_RAX = *in_RAX + (char)in_RAX;
  bVar2 = *in_RAX;
  *in_RAX = *in_RAX + param_2;
  uVar3 = ((int)in_RAX + -0x1d300003) - (uint)CARRY1(bVar2,param_2);
  uVar3 = uVar3 + *(int *)(ulonglong)uVar3;
  bVar2 = (byte)uVar3;
  *param_4 = *param_4 + bVar2;
  *unaff_RDI = *unaff_RDI + param_1;
  pbVar1 = (byte *)(in_FS_OFFSET + (ulonglong)uVar3);
  *pbVar1 = *pbVar1 | bVar2;
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

