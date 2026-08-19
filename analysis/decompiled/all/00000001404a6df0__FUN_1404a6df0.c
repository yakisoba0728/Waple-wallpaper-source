// Function: FUN_1404a6df0
// Addr: 1404a6df0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6df0(byte *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  int in_EAX;
  uint uVar6;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint *unaff_RSI;
  longlong unaff_RDI;
  char *pcVar7;
  uint *puVar11;
  
  uVar6 = in_EAX + 0x90000334;
  pcVar7 = (char *)(ulonglong)uVar6;
  bVar2 = (byte)param_1 & 7;
  *param_1 = *param_1 >> bVar2 | *param_1 << 8 - bVar2;
  *(char *)(unaff_RDI + -0x37fff62e) = *(char *)(unaff_RDI + -0x37fff62e) + unaff_BH;
  iVar1 = *param_2;
  pbVar10 = (byte *)(ulonglong)(uint)(iVar1 * 0x21);
  *pcVar7 = *pcVar7 + (char)uVar6;
  pcVar7[-0x40fff62e] = pcVar7[-0x40fff62e] + (char)param_2;
  bVar4 = (byte)(iVar1 * 0x21);
  bVar2 = bVar4 & 7;
  *pbVar10 = *pbVar10 >> bVar2 | *pbVar10 << 8 - bVar2;
  uVar3 = (undefined3)(uVar6 >> 8);
  bVar4 = (char)uVar6 + bVar4;
  uVar9 = *param_2 * 0x21;
  puVar11 = (uint *)(ulonglong)uVar9;
  uVar6 = CONCAT31(uVar3,bVar4 | *(byte *)((ulonglong)CONCAT31(uVar3,bVar4) * 2));
  bVar2 = *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (ulonglong)uVar6);
  uVar6 = uVar6 + 0xd0000234;
  puVar8 = (uint *)(ulonglong)uVar6;
  bVar4 = (byte)uVar9 & 0x1f;
  *puVar11 = *puVar11 >> bVar4 | *puVar11 << 0x20 - bVar4;
  cVar5 = (char)uVar6;
  (&stack0x00000000)
  [CONCAT62((int6)((ulonglong)param_2 >> 0x10),
            CONCAT11((byte)((ulonglong)param_2 >> 8) | bVar2,(char)param_2)) * 8] =
       (&stack0x00000000)
       [CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                 CONCAT11((byte)((ulonglong)param_2 >> 8) | bVar2,(char)param_2)) * 8] + cVar5;
  *puVar8 = *puVar8 | uVar6;
  *puVar8 = *puVar8 & uVar6;
  *(char *)puVar8 = (char)*puVar8 + cVar5;
  *puVar8 = *puVar8 | uVar6;
  uVar6 = CONCAT31((int3)(uVar6 >> 8),cVar5 + -0x2c);
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 | uVar6;
  *unaff_RSI = *unaff_RSI & uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

