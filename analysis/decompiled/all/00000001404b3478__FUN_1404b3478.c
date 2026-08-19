// Function: FUN_1404b3478
// Addr: 1404b3478
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b349e) overlaps instruction at (ram,0x0001404b349d)
    */

void FUN_1404b3478(uint *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  int in_EAX;
  uint uVar2;
  uint uVar4;
  longlong lVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  longlong unaff_RSI;
  uint *puVar3;
  
  *param_1 = *param_1 & (uint)param_2;
  *(int *)((longlong)param_2 + (longlong)param_1) =
       *(int *)((longlong)param_2 + (longlong)param_1) + (uint)param_2;
  lVar5 = (longlong)param_1 + -1;
  if (lVar5 != 0 && in_EAX + 0x5a000934 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((longlong)param_1 + -0x6bffe821) =
       *(char *)((longlong)param_1 + -0x6bffe821) + (char)lVar5;
  uVar4 = (uint)lVar5 ^ *(uint *)CONCAT71(unaff_00000019,unaff_BL);
  *param_2 = *param_2 & uVar4;
  uVar2 = in_EAX + 0xe30014a8;
  puVar3 = (uint *)(ulonglong)uVar2;
  if (uVar4 == 1 || uVar2 == 0) {
    *(char *)(unaff_RSI + -0x57ffe820) = *(char *)(unaff_RSI + -0x57ffe820) + (char)(uVar2 >> 8);
    *puVar3 = *puVar3 & uVar2;
    *(char *)puVar3 = (char)*puVar3 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + unaff_SPL;
  *(char *)puVar3 = (char)*puVar3 + (char)uVar2;
  pcVar1 = (char *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),
                             CONCAT22((short)((ulonglong)param_2 >> 0x10),
                                      CONCAT11((byte)((ulonglong)param_2 >> 8) |
                                               (byte)((uint)(in_EAX + 0x5a000934) >> 8),
                                               (char)param_2))) + -0x20);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

