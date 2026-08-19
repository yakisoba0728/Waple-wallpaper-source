// Function: FUN_1404ba6a0
// Addr: 1404ba6a0
// Size: 1 bytes


void FUN_1404ba6a0(char *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  char unaff_BL;
  byte unaff_SPL;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  iVar2 = in_EAX + -0x4ffffa1c;
  out(0x20,iVar2);
  out(0x20,iVar2);
  piVar3 = (int *)(ulonglong)
                  CONCAT22((short)((uint)iVar2 >> 0x10),
                           CONCAT11((char)((uint)iVar2 >> 8) + (char)iVar2,(char)iVar2));
  *unaff_RDI = *unaff_RSI;
  bVar1 = *param_4;
  *param_4 = *param_4 + unaff_SPL;
  *piVar3 = (*piVar3 - (int)param_1) - (uint)CARRY1(bVar1,unaff_SPL);
  *param_1 = *param_1 + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

