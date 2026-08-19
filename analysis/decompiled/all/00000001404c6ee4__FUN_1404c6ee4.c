// Function: FUN_1404c6ee4
// Addr: 1404c6ee4
// Size: 1 bytes


void FUN_1404c6ee4(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined7 uVar4;
  char *unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  undefined8 unaff_retaddr;
  char *pcVar3;
  
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  cVar2 = (char)unaff_retaddr + '/';
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),cVar2);
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(char *)CONCAT71(uVar4,0x2f) = *(char *)CONCAT71(uVar4,0x2f) + unaff_R12B;
  *unaff_RSI = *unaff_RSI + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

