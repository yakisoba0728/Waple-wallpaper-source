// Function: FUN_1404cdd74
// Addr: 1404cdd74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdd74(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  longlong in_RAX;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  lVar7 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                   CONCAT11((char)((ulonglong)param_2 >> 8) + (char)in_RAX,(char)param_2));
  uVar4 = CONCAT31((int3)((ulonglong)param_1 >> 8),0x3f);
  (&stack0x0000004c)[CONCAT71(unaff_00000019,unaff_BL) * 8] =
       (&stack0x0000004c)[CONCAT71(unaff_00000019,unaff_BL) * 8] + unaff_BL;
  *(char *)CONCAT44(uVar5,uVar4) = *(char *)CONCAT44(uVar5,uVar4) + (char)in_RAX;
  uVar2 = (uint)in_RAX | *(uint *)(in_RAX * 2);
  uVar6 = (uint)lVar7 | *(uint *)(lVar7 + CONCAT44(uVar5,uVar4));
  uVar6 = uVar6 | *(uint *)((ulonglong)uVar6 + 7);
  LOCK();
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 & uVar4;
  UNLOCK();
  *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 | uVar2;
  uVar2 = uVar2 + 0x70000834;
  pcVar3 = (char *)(ulonglong)uVar2;
  out((short)uVar6,uVar2);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x4fffbf11);
  *pcVar1 = *pcVar1 + unaff_BL;
  *pcVar3 = *pcVar3 + (char)uVar2;
  pcVar3[-0x11] = pcVar3[-0x11] + (char)(uVar6 >> 8);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x4fffbf11);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

