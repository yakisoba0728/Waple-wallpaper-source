// Function: FUN_1404a0f04
// Addr: 1404a0f04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0f04(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  uint *puVar4;
  undefined1 uVar7;
  undefined6 uVar8;
  longlong unaff_RBX;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  char *pcVar5;
  char cVar6;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar7 = (undefined1)param_1;
  cVar6 = (char)((ulonglong)in_RAX >> 8) + (char)param_2;
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar6,(char)in_RAX));
  *puVar4 = *puVar4 | (uint)puVar4;
  cVar6 = cVar6 + (char)in_RAX;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + cVar1;
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + cVar6;
  *(char *)(param_1 + 0x394c000) = *(char *)(param_1 + 0x394c000) + cVar1;
  cVar6 = (char)((ulonglong)param_1 >> 8) + cVar6;
  uVar2 = in(0x49);
  *(char *)CONCAT62(uVar8,CONCAT11(cVar6,uVar7)) =
       *(char *)CONCAT62(uVar8,CONCAT11(cVar6,uVar7)) + (char)(uVar2 >> 8);
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)uVar2;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  cVar1 = in(8);
  pcVar5 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
  *pcVar5 = *pcVar5 + cVar1;
  if (*pcVar5 != '\0') {
    *pcVar5 = *pcVar5 + cVar1;
    in(0x94);
  }
  uVar3 = in(0x49);
  *(char *)CONCAT62(uVar8,CONCAT11(cVar6,uVar7)) =
       *(char *)CONCAT62(uVar8,CONCAT11(cVar6,uVar7)) + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

