// Function: FUN_14049e6a4
// Addr: 14049e6a4
// Size: 1 bytes


void FUN_14049e6a4(char *param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  char cVar6;
  uint uVar3;
  uint uVar4;
  char unaff_BH;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  uint *puVar5;
  
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  while( true ) {
    uVar3 = in(0x49);
    puVar5 = (uint *)(ulonglong)uVar3;
    cVar6 = (char)(uVar3 >> 8);
    *param_1 = *param_1 + cVar6;
    cVar2 = (char)uVar3;
    *(char *)puVar5 = (char)*puVar5 + cVar2;
    *(char *)((longlong)puVar5 + -0x2a) = *(char *)((longlong)puVar5 + -0x2a) + cVar6;
    uVar4 = *puVar5;
    *(char *)puVar5 = (char)*puVar5 + cVar2;
    if (SCARRY1((char)uVar4,cVar2) == (char)*puVar5 < '\0') break;
    *puVar5 = *puVar5 & uVar3;
    *(char *)puVar5 = (char)*puVar5 + cVar2;
    uVar4 = in(0x49);
    cVar2 = (char)(uVar4 >> 8);
    *param_1 = *param_1 + cVar2;
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
    unaff_RSI[param_2 * 8] = unaff_RSI[param_2 * 8] + unaff_BH;
    *(char *)(param_2 + 0x6c0000d6) = *(char *)(param_2 + 0x6c0000d6) + cVar2;
  }
  *(char *)puVar5 = (char)*puVar5 + cVar2;
  uVar4 = in(0x49);
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

