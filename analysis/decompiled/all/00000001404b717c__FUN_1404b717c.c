// Function: FUN_1404b717c
// Addr: 1404b717c
// Size: 1 bytes


void FUN_1404b717c(undefined8 param_1,char *param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte in_AL;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  undefined4 *unaff_RDI;
  
  puVar1 = (uint *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x1a);
  *puVar1 = *puVar1 & unaff_ESI;
  pcVar2 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x18);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  *param_2 = *param_2 - (in_AL & 2);
  *param_2 = (char)((ulonglong)param_1 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

