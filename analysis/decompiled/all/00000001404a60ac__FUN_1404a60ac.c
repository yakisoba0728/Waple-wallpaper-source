// Function: FUN_1404a60ac
// Addr: 1404a60ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a60ac(int *param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *in_RAX;
  uint *puVar5;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  int unaff_EBX;
  uint unaff_ESP;
  int unaff_ESI;
  byte *unaff_RDI;
  byte *pbVar6;
  
  iVar3 = *in_RAX;
  bVar7 = (byte)param_2 + *(byte *)((longlong)in_RAX + 1);
  puVar5 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            ((char)in_RAX + -10) -
                            CARRY1((byte)param_2,*(byte *)((longlong)in_RAX + 1)));
  *(char *)((longlong)param_1 + (longlong)puVar5) =
       *(char *)((longlong)param_1 + (longlong)puVar5) + (char)unaff_EBX;
  *puVar5 = *puVar5 ^ (uint)puVar5;
  uVar4 = (uint)puVar5 | 0x9e00bf0;
  pbVar6 = (byte *)(ulonglong)uVar4;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar8 = bVar7 + pbVar6[1];
  *param_1 = *param_1 + (int)param_1 + (uint)CARRY1(bVar7,pbVar6[1]);
  *(char *)param_1 = (char)*param_1 + cVar8;
  param_1 = (int *)((longlong)param_1 + -1);
  if (param_1 == (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar9 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                   CONCAT11((char)((ulonglong)param_2 >> 8) + *pbVar6,cVar8));
  *pbVar6 = *pbVar6 + (byte)uVar4;
  *param_1 = *param_1 + unaff_EBX;
  bVar7 = *pbVar6;
  puVar5 = (uint *)(lVar9 * 2);
  uVar2 = *puVar5;
  *puVar5 = *puVar5 - unaff_ESP;
  piVar1 = (int *)((ulonglong)CONCAT31((int3)(uVar4 >> 8),(byte)uVar4 | bVar7) + lVar9);
  *piVar1 = (*piVar1 - (unaff_ESI + iVar3)) - (uint)(uVar2 < unaff_ESP);
  *(char *)param_1 = *(char *)param_1 + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

