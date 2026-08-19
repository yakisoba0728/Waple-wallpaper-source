// Function: FUN_1404a4368
// Addr: 1404a4368
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a4376) overlaps instruction at (ram,0x0001404a4375)
    */

void FUN_1404a4368(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  char in_AL;
  undefined7 in_register_00000001;
  char cVar3;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  
  cVar3 = (char)param_2;
  *(byte *)(unaff_RDI + 7) = *(byte *)(unaff_RDI + 7) >> 1;
  cVar2 = *param_1;
  *param_1 = *param_1 + cVar3;
  if (!SCARRY1(cVar2,cVar3)) {
    pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x21004a11);
    *pcVar1 = *pcVar1 + in_AL;
    *(char *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
    out(*unaff_RSI,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(byte *)(unaff_RDI + 7) = *(byte *)(unaff_RDI + 7) >> 1;
  *param_1 = *param_1 + cVar3;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x21004a11);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + CONCAT71(in_register_00000001,in_AL));
  *pcVar1 = *pcVar1 + in_AL;
  param_1[unaff_RBX] = param_1[unaff_RBX] + cVar3;
  param_1[param_2] = param_1[param_2] + (char)((ulonglong)param_2 >> 8);
  out(*unaff_RSI,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

