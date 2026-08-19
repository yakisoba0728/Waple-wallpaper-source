// Function: FUN_1404d273c
// Addr: 1404d273c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d273c(char *param_1,undefined8 param_2,char param_3,byte *param_4)

{
  int3 iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint *in_RAX;
  char *pcVar6;
  byte *pbVar7;
  int unaff_EBX;
  int *unaff_RSI;
  byte unaff_R12B;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar3 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar3;
  uVar5 = (uint)in_RAX ^ 0x35fa4200;
  pcVar6 = (char *)((ulonglong)uVar5 + 0x26);
  *pcVar6 = *pcVar6 + cVar3;
  bVar4 = *param_4;
  *param_4 = *param_4 + unaff_R12B;
  iVar1 = (int3)(uVar5 >> 8);
  bVar4 = cVar3 + *(char *)((ulonglong)uVar5 * 2) + CARRY1(bVar4,unaff_R12B);
  uVar2 = CONCAT31(iVar1,bVar4);
  uRam00000001804d361d = LocalDescriptorTableRegister();
  pcVar6 = (char *)(ulonglong)(uVar2 ^ 0x35fb8200);
  pcVar6[0x26] = pcVar6[0x26] + bVar4;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar6 = *pcVar6 + bVar4;
  pcVar6[-5] = pcVar6[-5] + bVar4;
  pbVar7 = (byte *)(ulonglong)uVar2;
  pbVar7[0x26] = pbVar7[0x26] + bVar4;
  *param_4 = *param_4 + param_3;
  *pbVar7 = *pbVar7 | bVar4;
  bVar4 = in(0xe);
  cVar3 = (char)((int)uVar5 >> 0x1f);
  *param_1 = *param_1 + cVar3;
  *param_1 = *param_1 + cVar3;
  *(int *)(param_1 + (ulonglong)((int)iVar1 >> 0x17 | 0xb600c70) + 0xee49c00) =
       *(int *)(param_1 + (ulonglong)((int)iVar1 >> 0x17 | 0xb600c70) + 0xee49c00) + unaff_EBX;
  *param_1 = *param_1 + (bVar4 ^ 0xf);
  *param_1 = *param_1 + (bVar4 ^ 0xf);
  *unaff_RSI = *unaff_RSI + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

