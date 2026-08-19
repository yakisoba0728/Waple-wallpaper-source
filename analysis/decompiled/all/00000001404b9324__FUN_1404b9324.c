// Function: FUN_1404b9324
// Addr: 1404b9324
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9324(undefined8 param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_OF;
  undefined7 uVar3;
  
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RSI;
  pcVar2 = (char *)func_0x0001446c938b();
  uVar3 = (undefined7)((ulonglong)pcVar2 >> 8);
  cVar1 = (char)pcVar2 + *pcVar2 + '4';
  *(char *)CONCAT71(uVar3,cVar1) = *(char *)CONCAT71(uVar3,cVar1) + cVar1;
  unaff_RDI[1] = unaff_RDI[1] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

