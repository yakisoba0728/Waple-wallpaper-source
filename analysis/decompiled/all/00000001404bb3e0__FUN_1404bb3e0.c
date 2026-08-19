// Function: FUN_1404bb3e0
// Addr: 1404bb3e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb3e0(undefined8 param_1,byte *param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  char cVar9;
  ulonglong in_RAX;
  char *pcVar6;
  int *piVar8;
  byte unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined8 *puVar10;
  undefined8 *unaff_RBP;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  undefined1 auStack_29 [25];
  undefined8 uStack_10;
  int *piVar7;
  
  pcVar6 = (char *)(in_RAX | 0x70);
  piVar8 = (int *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x12);
  *piVar8 = *piVar8 + (int)param_2;
  pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + -0x28);
  *pcVar1 = *pcVar1 + (char)param_2;
  *pcVar6 = *pcVar6 + (char)pcVar6;
  iVar4 = iRam00000000a83a0002;
  puVar10 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar9 = '\x02';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar10 = puVar10 + -1;
    *puVar10 = *unaff_RBP;
    cVar9 = cVar9 + -1;
  } while ('\0' < cVar9);
  puVar2 = (uint *)((ulonglong)(iRam00000000a83a0002 + 0xa83a0002) - 0x77d6fffc);
  *puVar2 = *puVar2 ^ CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  uVar5 = iVar4 + 0xaeb21f02;
  piVar7 = (int *)(ulonglong)uVar5;
  bVar3 = *param_2;
  *param_2 = *param_2 + unaff_BL;
  *piVar7 = *piVar7 + uVar5 + (uint)CARRY1(bVar3,unaff_BL);
  piVar8 = (int *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                  0xd);
  *piVar8 = *piVar8 + (int)auStack_29;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   -0x48);
  cVar9 = (char)(uVar5 >> 8);
  *pcVar1 = *pcVar1 + cVar9;
  *(char *)piVar7 = (char)*piVar7 + (char)uVar5;
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       unaff_BH;
  uVar5 = CONCAT31((int3)cVar9,(char)uVar5 + *(char *)(ulonglong)(uint)(int)(short)uVar5 + 'x');
  uVar5 = uVar5 + *(int *)(ulonglong)uVar5;
  piVar8 = (int *)(ulonglong)uVar5;
  piVar8[1] = piVar8[1] & unaff_EDI;
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) + (char)param_2;
  *(char *)piVar8 = (char)*piVar8 + (char)uVar5;
  *piVar8 = *piVar8 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

