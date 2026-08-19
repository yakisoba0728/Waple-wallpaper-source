// Function: FUN_1404bc8fc
// Addr: 1404bc8fc
// Size: 1 bytes


void FUN_1404bc8fc(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RSI;
  char *unaff_RDI;
  undefined8 uStack_10;
  
  *unaff_RDI = *unaff_RDI + (char)param_2;
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  out(*unaff_RSI,(short)param_2);
                    /* WARNING: Could not recover jumptable at 0x0001404bc90d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)();
  return;
}

