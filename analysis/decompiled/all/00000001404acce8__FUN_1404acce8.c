// Function: FUN_1404acce8
// Addr: 1404acce8
// Size: 1 bytes


void FUN_1404acce8(char *param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int *in_RAX;
  char *pcVar5;
  uint uVar6;
  undefined1 *unaff_RDI;
  byte in_CF;
  
  uVar2 = param_2 + (uint)&stack0x00000000;
  uVar6 = uVar2 + in_CF;
  iVar4 = ((int)in_RAX - *in_RAX) -
          (uint)(CARRY4(param_2,(uint)&stack0x00000000) || CARRY4(uVar2,(uint)in_CF));
  bVar3 = (byte)iVar4;
  uVar2 = CONCAT22((short)((uint)iVar4 >> 0x10),CONCAT11((byte)((uint)iVar4 >> 8) | bVar3,bVar3));
  pcVar5 = (char *)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xef);
  *pcVar5 = *pcVar5 + -0x11 + (bVar3 < *(byte *)(ulonglong)uVar2);
  *pcVar5 = *pcVar5 + -0x10;
  uVar1 = in((short)uVar6);
  *unaff_RDI = uVar1;
  *param_1 = *param_1 + -0x11;
  *(undefined1 *)(ulonglong)uVar6 = *(undefined1 *)(ulonglong)uVar6;
  *(char *)((ulonglong)&stack0x00000000 & 0xffffffff) =
       *(char *)((ulonglong)&stack0x00000000 & 0xffffffff) + (char)param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

