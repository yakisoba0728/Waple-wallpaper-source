// Function: FUN_1404d11e8
// Addr: 1404d11e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d11e8(byte *param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  byte in_CF;
  
  uVar3 = (in_EAX + 0x3fffc01e) - (uint)in_CF;
  bVar1 = *param_1;
  *param_1 = *param_1 + param_3;
  uVar2 = uVar3 + 0xfee2fff6;
  uVar4 = uVar2 - CARRY1(bVar1,param_3);
  *(int *)(ulonglong)uVar4 =
       *(int *)(ulonglong)uVar4 + uVar4 + (uint)(uVar3 < 0x11d000a || uVar2 < CARRY1(bVar1,param_3))
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

