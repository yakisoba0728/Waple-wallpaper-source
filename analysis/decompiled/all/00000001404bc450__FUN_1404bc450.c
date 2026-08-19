// Function: FUN_1404bc450
// Addr: 1404bc450
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc450(int *param_1,int param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  char cVar3;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)(unaff_RSI + 1);
  bVar2 = in_AL & *(byte *)CONCAT71(in_register_00000001,in_AL);
  *param_4 = *param_4 + (bVar2 | 0xc3);
  pcVar1 = (char *)((CONCAT71(in_register_00000001,bVar2) | 0xc3) + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + (char)param_1;
  cVar3 = (bVar2 | 0xc3) + *(char *)(CONCAT71(in_register_00000001,bVar2) | 0xc3) + 'b';
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

