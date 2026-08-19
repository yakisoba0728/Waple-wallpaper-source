// Function: FUN_1404ade90
// Addr: 1404ade90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ade90(longlong param_1,uint *param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  int *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  byte *pbVar4;
  
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) * 8 + 0x801004a);
  *pcVar1 = *pcVar1 + unaff_BL;
  uVar3 = (int)in_RAX + *in_RAX;
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar2 = (byte)uVar3;
  *(byte *)(param_2 + 1) = (byte)param_2[1] | bVar2;
  *(char *)param_2 = (char)*param_2;
  *pbVar4 = *pbVar4 + bVar2;
  *param_2 = *param_2 & (uint)&stack0x00000000;
  *pbVar4 = *pbVar4 | bVar2;
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                   CONCAT11((byte)(uVar3 >> 8) & *(byte *)((longlong)param_2 + param_1),bVar2)) +
          0xeefff41c;
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

