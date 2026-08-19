// Function: FUN_1404c03b0
// Addr: 1404c03b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c03b0(uint param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  uint *puVar3;
  undefined1 *unaff_RSI;
  
  puVar3 = (uint *)func_0x00017c4c2bdb();
  param_1 = param_1 & *param_2;
  *puVar3 = *puVar3 & (uint)puVar3;
  *(char *)puVar3 = (char)*puVar3 + (char)puVar3;
  *unaff_RSI = 0;
  cVar2 = (char)puVar3 + (char)(param_1 >> 8);
  pcVar1 = (char *)CONCAT44((int)((ulonglong)puVar3 >> 0x20),
                            CONCAT31((int3)((ulonglong)puVar3 >> 8),cVar2));
  *pcVar1 = *pcVar1 - cVar2;
  *(undefined1 *)(ulonglong)param_1 = *(undefined1 *)(ulonglong)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

