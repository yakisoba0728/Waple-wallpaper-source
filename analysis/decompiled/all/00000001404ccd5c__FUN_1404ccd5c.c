// Function: FUN_1404ccd5c
// Addr: 1404ccd5c
// Size: 1 bytes


void FUN_1404ccd5c(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

