// Function: FUN_1404a97e4
// Addr: 1404a97e4
// Size: 1 bytes


void FUN_1404a97e4(char *param_1,char *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char unaff_SPL;
  longlong unaff_RDI;
  
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + (char)param_2;
  param_1[unaff_RDI] = param_1[unaff_RDI] + (char)((ulonglong)param_2 >> 8);
  uVar1 = in(0xda);
  pcVar2 = (char *)(ulonglong)CONCAT22((short)((uint)uVar1 >> 0x10),CONCAT11(0x24,(char)uVar1));
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 + (char)param_1;
  *pcVar2 = *pcVar2 + (char)uVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

