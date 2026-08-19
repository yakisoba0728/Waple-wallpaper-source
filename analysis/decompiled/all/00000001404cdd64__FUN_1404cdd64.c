// Function: FUN_1404cdd64
// Addr: 1404cdd64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdd64(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined3 uVar2;
  char cVar3;
  uint uVar4;
  char *in_RAX;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  uVar8 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar2 = (undefined3)((ulonglong)param_1 >> 8);
  cVar3 = (char)in_RAX;
  lVar10 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                    CONCAT11((char)((ulonglong)param_2 >> 8) + cVar3,(char)param_2));
  uVar6 = CONCAT31(uVar2,0x3f);
  (&stack0x0000004c)[CONCAT71(unaff_00000019,unaff_BL) * 8] =
       (&stack0x0000004c)[CONCAT71(unaff_00000019,unaff_BL) * 8] + unaff_BL;
  *(char *)CONCAT44(uVar8,uVar6) = *(char *)CONCAT44(uVar8,uVar6) + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + cVar3;
  in_RAX[-0x39ffc04f] = in_RAX[-0x39ffc04f] + (char)param_2;
  uVar7 = CONCAT31(uVar2,0x3f);
  (&stack0x0000004c)[CONCAT71(unaff_00000019,unaff_BL) * 8] =
       (&stack0x0000004c)[CONCAT71(unaff_00000019,unaff_BL) * 8] + unaff_BL;
  *(char *)CONCAT44(uVar8,uVar7) = *(char *)CONCAT44(uVar8,uVar7) + cVar3;
  uVar4 = (uint)in_RAX | *(uint *)((longlong)in_RAX * 2);
  uVar9 = (uint)lVar10 | *(uint *)(lVar10 + CONCAT44(uVar8,uVar7));
  uVar9 = uVar9 | *(uint *)((ulonglong)uVar9 + 7);
  LOCK();
  *(uint *)(ulonglong)uVar9 = *(uint *)(ulonglong)uVar9 & uVar7;
  UNLOCK();
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  uVar4 = uVar4 + 0x70000834;
  pcVar5 = (char *)(ulonglong)uVar4;
  out((short)uVar9,uVar4);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x4fffbf11);
  *pcVar1 = *pcVar1 + unaff_BL;
  *pcVar5 = *pcVar5 + (char)uVar4;
  pcVar5[-0x11] = pcVar5[-0x11] + (char)(uVar9 >> 8);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x4fffbf11);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

