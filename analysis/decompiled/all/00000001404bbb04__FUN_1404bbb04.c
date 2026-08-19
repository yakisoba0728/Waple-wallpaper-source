// Function: FUN_1404bbb04
// Addr: 1404bbb04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbb04(byte *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  char *in_RAX;
  uint *puVar2;
  char unaff_BH;
  char unaff_SPL;
  char in_CF;
  
  *(char *)(param_2 + 0x21004b) = *(char *)(param_2 + 0x21004b) + unaff_BH + in_CF;
  *in_RAX = *in_RAX + (char)in_RAX;
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x9e);
  *puVar2 = *puVar2 & (uint)puVar2;
  iVar1 = (uint)puVar2 + 0x1000219f;
  param_1[0x821004b] = param_1[0x821004b];
  puVar2 = (uint *)CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),0xa0);
  *puVar2 = *puVar2 & (uint)puVar2;
  param_1[0x4e540021] = param_1[0x4e540021] - (char)((uint)iVar1 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)puVar2 = (char)*puVar2 + -0x60;
  *(char *)(puVar2 + 0x6000868) = (char)puVar2[0x6000868];
  if (!SCARRY4(iRam1501004b4e540021,0xe001b01)) {
    *param_1 = *param_1 ^ (byte)((uint)(iRam1501004b4e540021 + 0xe001b01) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

