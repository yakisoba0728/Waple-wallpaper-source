// Function: FUN_14049ed98
// Addr: 14049ed98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014049edf2) */

void FUN_14049ed98(uint *param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  int *piVar6;
  byte bVar8;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RBP;
  uint unaff_EDI;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  undefined1 in_XMM1 [16];
  byte *pbVar5;
  uint *puVar7;
  
  uVar3 = (in_EAX | 0x21600be0) + 0x74050002;
  pbVar5 = (byte *)(ulonglong)uVar3;
  *pbVar5 = *pbVar5 | (byte)uVar3;
  bVar8 = (byte)((ushort)param_2 >> 8);
  *(uint *)pbVar5 = *(int *)pbVar5 + uVar3;
  piVar6 = (int *)(ulonglong)unaff_EDI;
  *(byte *)param_1 = (byte)*param_1 ^ (byte)unaff_EDI;
  *(char *)(piVar6 + 0x840127b) = (char)piVar6[0x840127b] + unaff_BH;
  *(byte *)piVar6 = (char)*piVar6 + (byte)unaff_EDI;
  *(byte *)(piVar6 + 0xc) = (char)piVar6[0xc] + bVar8;
  *piVar6 = *piVar6 + unaff_EDI;
  *(byte *)param_1 = (byte)*param_1 ^ (byte)uVar3;
  pcVar1 = (char *)((ulonglong)uVar3 + 0x10049ec);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)(ulonglong)unaff_EDI = *(char *)(ulonglong)unaff_EDI + (char)param_1;
  uVar3 = uVar3 | *(uint *)(in_FS_OFFSET + (ulonglong)uVar3);
  sysenter();
  rsqrtps(in_XMM1,*(undefined1 (*) [16])CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  uVar4 = CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *(byte *)(ulonglong)uVar3) + 0x54050002;
  puVar7 = (uint *)(ulonglong)uVar4;
  *puVar7 = *puVar7 | uVar4;
  *(byte *)param_1 = (byte)*param_1 ^ bVar8;
  *puVar7 = *puVar7 + uVar4;
  *(uint *)(unaff_GS_OFFSET + (longlong)param_1) =
       *(uint *)(unaff_GS_OFFSET + (longlong)param_1) ^ uVar4;
  cVar2 = in(param_2);
  uVar3 = CONCAT31((int3)(uVar4 >> 8),cVar2);
  piVar6 = (int *)(ulonglong)uVar3;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)piVar6 = (char)*piVar6 + cVar2;
  *(byte *)piVar6 = (char)*piVar6 + bVar8;
  *param_1 = *param_1 ^ uVar3;
  *(char *)(unaff_RBP + 0x31) = *(char *)(unaff_RBP + 0x31) + (char)(uVar4 >> 8);
  *piVar6 = *piVar6 + uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

