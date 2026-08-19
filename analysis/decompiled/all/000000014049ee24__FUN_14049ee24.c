// Function: FUN_14049ee24
// Addr: 14049ee24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ee24(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  byte bVar6;
  undefined8 in_RAX;
  uint *puVar4;
  char *pcVar5;
  char *pcVar8;
  int *unaff_RBX;
  char unaff_SPL;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined7 uVar7;
  
  uVar2 = (undefined1)in_RAX;
  bVar6 = (char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_2 >> 8);
  uVar7 = (undefined7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar6,uVar2)) >> 8);
  puVar4 = (uint *)CONCAT71(uVar7,uVar2);
  *(char *)((longlong)unaff_RBX + param_1) = *(char *)((longlong)unaff_RBX + param_1) + bVar6;
  pcVar5 = (char *)(param_2 + param_1);
  *pcVar5 = *pcVar5 + (char)param_2;
  pcVar8 = (char *)(param_1 + -1);
  if (pcVar8 == (char *)0x0 || *pcVar5 == '\0') {
    uVar1 = *puVar4;
    uVar3 = (uint)puVar4;
    *puVar4 = *puVar4 + uVar3;
    *unaff_RBX = *unaff_RBX + unaff_ESI + (uint)CARRY4(uVar1,uVar3);
    *puVar4 = *puVar4 + uVar3;
    pcVar5 = (char *)(CONCAT71(uVar7,uVar2) & 0xffffffffffffffed);
    *param_4 = *param_4 + unaff_SPL;
    *pcVar5 = *pcVar5 + (char)pcVar5;
    *pcVar8 = *pcVar8 + (char)param_2;
    pcVar5 = (char *)(unaff_RBP * 8 + 0x1c010049);
    *pcVar5 = *pcVar5 + (bVar6 ^ (byte)((uint)*(undefined4 *)pcVar8 >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

