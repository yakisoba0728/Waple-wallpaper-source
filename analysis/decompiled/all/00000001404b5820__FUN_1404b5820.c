// Function: FUN_1404b5820
// Addr: 1404b5820
// Size: 1 bytes


void FUN_1404b5820(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte in_AL;
  byte bVar1;
  char cVar2;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  char unaff_SPL;
  uint unaff_EBP;
  char *unaff_RDI;
  
  bVar1 = in_AL & 0x57;
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff57) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff57) + bVar1;
  cVar2 = bVar1 * '\x02';
  *unaff_RDI = cVar2;
  cVar2 = (cVar2 - *(char *)CONCAT71(in_register_00000001,cVar2)) - CARRY1(bVar1,bVar1);
  *(uint *)(unaff_RBX + 0x5724001a) = *(uint *)(unaff_RBX + 0x5724001a) | unaff_EBP;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + param_1;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

