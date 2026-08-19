// Function: FUN_1404cd644
// Addr: 1404cd644
// Size: 1 bytes


void FUN_1404cd644(byte *param_1,uint *param_2)

{
  uint uVar1;
  uint *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  uint unaff_ESI;
  
  uVar1 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar1;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(undefined1 *)(unaff_RBP + 0x41) = 0;
  *(uint *)((longlong)in_RAX * 2) = *(uint *)((longlong)in_RAX * 2) | uVar1;
  *param_2 = *param_2 | unaff_ESI;
  *param_1 = *param_1 ^ (byte)(uVar1 + 0x25003c0 >> 8);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

