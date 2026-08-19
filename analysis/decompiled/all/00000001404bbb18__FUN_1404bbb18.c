// Function: FUN_1404bbb18
// Addr: 1404bbb18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbb18(byte *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint *in_RAX;
  uint *puVar1;
  byte bVar2;
  char unaff_SPL;
  
  bVar2 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)param_1;
  param_1[param_2] = param_1[param_2] | bVar2;
  puVar1 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0xa0);
  *puVar1 = *puVar1 & (uint)puVar1;
  param_1[0x4e540021] = param_1[0x4e540021] - (char)((ulonglong)in_RAX >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)puVar1 = (char)*puVar1 + -0x60;
  *(byte *)(puVar1 + 0x6000868) = (char)puVar1[0x6000868] + bVar2;
  if (!SCARRY4(iRam1501004b4e540021,0xe001b01)) {
    *param_1 = *param_1 ^ (byte)((uint)(iRam1501004b4e540021 + 0xe001b01) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

