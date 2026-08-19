// Function: FUN_1404bc620
// Addr: 1404bc620
// Size: 1 bytes


void FUN_1404bc620(byte *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *in_RAX;
  
  *param_2 = *param_2 + (int)param_2;
  bVar2 = (byte)in_RAX;
  bVar1 = bVar2 + *in_RAX + *param_1;
  uVar3 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1 + CARRY1(bVar2,*in_RAX)) + -0x124a2100
          ) - (uint)(CARRY1(bVar2 + *in_RAX,*param_1) || CARRY1(bVar1,CARRY1(bVar2,*in_RAX)));
  *(char *)(param_2 + 0x1a) = (char)param_2[0x1a] + (char)param_1;
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

