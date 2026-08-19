// Function: FUN_1404aa838
// Addr: 1404aa838
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404aa89a) */

void FUN_1404aa838(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  char in_CF;
  
  uVar4 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar2 = (char)param_2;
  cVar3 = (char)((ulonglong)param_2 >> 8) + *(char *)(param_2 + param_1) + in_CF;
  if ((POPCOUNT(in_AL + '4') & 1U) != 0) {
    *(undefined8 *)((ulonglong)((uint)&stack0x00000000 | *(uint *)(unaff_RSI + param_1)) - 8) =
         unaff_RBP;
    *(int *)(param_1 * 2) = *(int *)(param_1 * 2) + CONCAT22(uVar4,CONCAT11(cVar3,cVar2));
    pcVar1 = (char *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),
                               CONCAT22(uVar4,CONCAT11(cVar3,cVar2))) +
                     CONCAT71(in_register_00000001,in_AL + '4') * 2);
    *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

