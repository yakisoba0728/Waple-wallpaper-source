// Function: FUN_1404c5a60
// Addr: 1404c5a60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5a60(int *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int *in_RAX;
  char cVar7;
  undefined7 uVar8;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  char acStack_8 [8];
  int *piVar5;
  uint *puVar6;
  
  uVar8 = (undefined7)((ulonglong)param_2 >> 8);
  cVar7 = (char)param_2 + (char)in_RAX[8];
  *(byte *)(ulonglong)(uint)(unaff_ESI + *in_RAX) =
       *(byte *)(ulonglong)(uint)(unaff_ESI + *in_RAX) >> 1;
  cVar3 = (char)in_RAX + (char)((ulonglong)in_RAX >> 8);
  piVar5 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  *(char *)piVar5 = (char)*piVar5 + cVar3;
  *(char *)param_1 = (char)*param_1 + cVar3;
  *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
       (uint)piVar5;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  acStack_8[0] = '\x06';
  acStack_8[1] = '\0';
  acStack_8[2] = '\x04';
  acStack_8[3] = -0x1e;
  acStack_8[4] = -1;
  acStack_8[5] = -1;
  acStack_8[6] = -1;
  acStack_8[7] = -1;
  *(char *)piVar5 = (char)*piVar5 + cVar3;
  *param_1 = *param_1 + (int)param_1;
  uVar4 = (uint)piVar5 + *piVar5;
  puVar6 = (uint *)(ulonglong)uVar4;
  *(uint *)((longlong)puVar6 + 5) = *(uint *)((longlong)puVar6 + 5) | unaff_EBP;
  pcVar1 = (char *)(CONCAT71(uVar8,cVar7) + (longlong)puVar6 * 8);
  cVar3 = (char)uVar4;
  *pcVar1 = *pcVar1 + cVar3;
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  *puVar6 = *puVar6 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  uVar2 = *puVar6;
  *puVar6 = *puVar6 + uVar4;
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  *(int *)((longlong)puVar6 + (longlong)param_1) =
       *(int *)((longlong)puVar6 + (longlong)param_1) + unaff_EDI;
  acStack_8[CONCAT71(uVar8,(cVar7 - cVar3) - CARRY4(uVar2,uVar4)) * 2] =
       acStack_8[CONCAT71(uVar8,(cVar7 - cVar3) - CARRY4(uVar2,uVar4)) * 2] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

