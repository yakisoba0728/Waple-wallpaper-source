// Function: FUN_1404cb360
// Addr: 1404cb360
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404cb361) overlaps instruction at (ram,0x0001404cb360)
    */

void FUN_1404cb360(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *in_RAX;
  uint *puVar4;
  uint *unaff_RBX;
  char *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  bool in_OF;
  
  if (in_OF) {
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
    *in_RAX = *in_RAX | (uint)in_RAX;
    uVar2 = CONCAT44(param_2,(uint)in_RAX + 0x70000f34);
    in_RAX = (uint *)(uVar2 / *unaff_RBX & 0xffffffff);
    uVar2 = uVar2 % (ulonglong)*unaff_RBX;
    param_2 = (undefined4)uVar2;
    pcVar1 = (char *)(unaff_RDI + -0x4d97ffcd + (longlong)unaff_RSI * 8);
    *pcVar1 = *pcVar1 + (char)(uVar2 >> 8);
    *param_1 = *param_1 + unaff_R12B;
  }
  uVar3 = (uint)in_RAX ^ *in_RAX;
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11(0xf7,(char)uVar3));
  uVar3 = uVar3 ^ *(uint *)(ulonglong)uVar3;
  puVar4 = (uint *)(ulonglong)uVar3;
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x21004cb2;
  *(char *)puVar4 = (char)*puVar4 + (char)uVar3;
  *(char *)((longlong)puVar4 + -9) = *(char *)((longlong)puVar4 + -9) + (char)((uint)param_2 >> 8);
  uVar3 = CONCAT22((short)((uVar3 ^ *puVar4) >> 0x10),CONCAT11(0xf7,(char)(uVar3 ^ *puVar4)));
  uVar3 = uVar3 ^ *(uint *)(ulonglong)uVar3;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0x21004cb2;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

