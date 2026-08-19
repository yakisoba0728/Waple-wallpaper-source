// Function: FUN_1404aae18
// Addr: 1404aae18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aae39) overlaps instruction at (ram,0x0001404aae38)
    */

void FUN_1404aae18(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  char cVar3;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  char in_SF;
  char in_OF;
  undefined1 *puStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  pcVar1 = unaff_RSI + 1;
  out(*unaff_RSI,(short)param_2);
  if (in_OF != in_SF) {
    *pcVar1 = *pcVar1 + cVar3;
    *param_4 = *param_4;
    *(byte *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
    pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x7d);
    *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OF == in_SF) {
    in_AL = in_AL ^ 0xc;
  }
  *pcVar1 = *pcVar1 + cVar3;
  *param_4 = *param_4 + in_AL;
  uStack_8 = param_2;
  uStack_10 = param_2;
  puStack_18 = (undefined1 *)&uStack_10;
  *(int *)((longlong)&puStack_18 + (longlong)param_1) =
       *(int *)((longlong)&puStack_18 + (longlong)param_1) + (int)pcVar1;
  *param_1 = *param_1 + (char)param_2;
  bVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI << 1 | (char)bVar2 < '\0';
  if ((char)bVar2 < '\0' == (char)*unaff_RDI < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

