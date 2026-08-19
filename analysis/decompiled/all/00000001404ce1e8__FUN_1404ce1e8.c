// Function: FUN_1404ce1e8
// Addr: 1404ce1e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ce2b3) */
/* WARNING: Removing unreachable block (ram,0x0001404ce2bd) */

void FUN_1404ce1e8(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  byte bVar7;
  undefined8 in_RAX;
  char cVar8;
  undefined7 uVar9;
  char unaff_R14B;
  int *piVar6;
  
  uVar9 = (undefined7)((ulonglong)param_2 >> 8);
  cVar3 = (char)in_RAX + '`';
  piVar6 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  cVar8 = (char)param_2 + (char)*piVar6;
  *(char *)((longlong)piVar6 + -0x2e) = *(char *)((longlong)piVar6 + -0x2e) + cVar3;
  cVar3 = (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + cVar3;
  *(char *)CONCAT71(uVar9,cVar8) = *(char *)CONCAT71(uVar9,cVar8) + unaff_R14B;
  *piVar6 = *piVar6 + (uint)piVar6;
  *(char *)piVar6 = (char)*piVar6 + cVar3;
  uVar5 = (uint)piVar6 ^ 0x3c004ce1;
  if (param_1 == (char *)0x1 || uVar5 != 0) {
    bVar4 = (byte)uVar5;
    *(byte *)CONCAT71(uVar9,cVar8) = *(char *)CONCAT71(uVar9,cVar8) + bVar4;
    bVar7 = (byte)(uVar5 >> 8) | bVar4;
    if (bVar7 != 0) {
      pcVar1 = (char *)((ulonglong)CONCAT22((short)(uVar5 >> 0x10),CONCAT11(bVar7,bVar4)) + 6);
      *pcVar1 = *pcVar1 + bVar4;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

