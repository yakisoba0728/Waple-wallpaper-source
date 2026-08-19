// Function: FUN_1404a7478
// Addr: 1404a7478
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a74f3) */

void FUN_1404a7478(char *param_1,uint *param_2)

{
  char cVar1;
  code *pcVar2;
  uint3 uVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  byte *in_RAX;
  undefined7 uVar10;
  byte *pbVar7;
  char *pcVar8;
  byte bVar11;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  byte *unaff_RDI;
  longlong unaff_GS_OFFSET;
  int *piVar9;
  
  bVar11 = (byte)param_1;
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = (byte)in_RAX | *in_RAX;
  uVar6 = (uint)param_1;
  if (bVar4 != 0) {
    *param_1 = *param_1 + bVar4;
    uVar6 = (uint)(char *)CONCAT71(uVar10,bVar4) | *param_2;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar11;
    uVar3 = (uint3)(uVar6 >> 8);
    LOCK();
    uRam00000001044f7490 = uRam00000001044f7490 & CONCAT31(uVar3,(byte)uVar6 ^ *unaff_RDI);
    UNLOCK();
    *param_1 = *param_1 + bVar11;
    *param_1 = *param_1;
    uVar6 = (int)CONCAT71((uint7)uVar3,0x73) + 0xd4050002;
    *(int *)(ulonglong)uVar6 = *(int *)(ulonglong)uVar6 + uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = *(char *)CONCAT71(uVar10,bVar4);
  pbVar7 = (byte *)CONCAT71(uVar10,cVar1);
  *(uint *)(unaff_GS_OFFSET + (longlong)param_2) =
       *(uint *)(unaff_GS_OFFSET + (longlong)param_2) | uVar6;
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar11;
  if (*pbVar7 == 0) {
    *(byte *)param_2 = ((char)*param_2 - bVar11) - CARRY1(bVar4,bVar11);
    *pbVar7 = *pbVar7 + unaff_BL;
    uVar5 = in(0);
    piVar9 = (int *)CONCAT71(uVar10,uVar5);
    (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_2;
    *piVar9 = *piVar9 + (int)piVar9;
    *(byte *)param_2 = (char)*param_2 + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  bVar4 = cVar1 + 2;
  pbVar7 = (byte *)CONCAT71(uVar10,bVar4);
  *pbVar7 = *pbVar7 + bVar4;
  *(uint *)(unaff_GS_OFFSET + (longlong)param_2) =
       *(uint *)(unaff_GS_OFFSET + (longlong)param_2) | uVar6;
  *(char *)((longlong)param_2 + 9) =
       *(char *)((longlong)param_2 + 9) + (char)((ulonglong)param_1 >> 8);
  cVar1 = (bVar4 | *pbVar7) + 0x8c;
  pcVar8 = (char *)CONCAT71(uVar10,cVar1);
  *param_1 = *param_1;
  *pcVar8 = *pcVar8 + cVar1;
  *(char *)param_2 = (char)*param_2 + unaff_BH;
  *param_2 = *param_2 | uVar6;
  *(char *)(unaff_RSI + 9) = *(char *)(unaff_RSI + 9) + (char)param_2;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

