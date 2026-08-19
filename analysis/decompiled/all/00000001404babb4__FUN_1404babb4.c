// Function: FUN_1404babb4
// Addr: 1404babb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404babb4(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  byte *in_RAX;
  undefined7 unaff_00000019;
  ulonglong uVar7;
  undefined8 unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined1 *puVar8;
  byte *pbVar6;
  
  bVar4 = (byte)in_RAX;
  *in_RAX = *in_RAX & bVar4;
  puVar2 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  unaff_RDI[1] = bVar4;
  *param_4 = *param_4;
  *(uint *)((longlong)in_RAX * 2) = *(uint *)((longlong)in_RAX * 2) & (uint)in_RAX;
  uVar7 = (ulonglong)((uint)&stack0x00000000 & (uint)puVar2);
  *in_RAX = *in_RAX + bVar4;
  puVar2[param_2] = puVar2[param_2] | (byte)param_2;
  *in_RAX = *in_RAX & bVar4;
  *(undefined8 *)(uVar7 - 8) = unaff_RBP;
  *in_RAX = *in_RAX + bVar4;
  *in_RAX = *in_RAX & bVar4;
  *(ulonglong *)(uVar7 - 0x210e) = uVar7 - 8;
  *in_RAX = *in_RAX + bVar4;
  puVar8 = (undefined1 *)(ulonglong)((int)(unaff_RDI + 1) + 1U | (uint)(uVar7 - 0x210e));
  *in_RAX = *in_RAX & bVar4;
  *in_RAX = *in_RAX & bVar4;
  pbVar3 = puVar8 + 1;
  *puVar8 = *puVar2;
  *pbVar3 = bVar4;
  *param_4 = *param_4 + (char)(uVar7 - 0x420c);
  *in_RAX = *in_RAX + bVar4;
  bVar4 = bVar4 + (char)((ulonglong)in_RAX >> 8);
  pbVar6 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4);
  *pbVar6 = *pbVar6 & bVar4;
  *pbVar6 = *pbVar6 & bVar4;
  *(byte *)(ulonglong)((int)pbVar3 + 1U | (uint)(uVar7 - 0x210e)) = bVar4;
  *param_4 = *param_4 + (char)(uVar7 - 0x420c);
  uVar5 = (int)(short)pbVar6 + 0x505d002;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,0xfe) + 1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 & uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

