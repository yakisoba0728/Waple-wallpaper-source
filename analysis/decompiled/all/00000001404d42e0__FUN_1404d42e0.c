// Function: FUN_1404d42e0
// Addr: 1404d42e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d42fe) overlaps instruction at (ram,0x0001404d42fc)
    */

void FUN_1404d42e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint *in_RAX;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined4 *unaff_RSI;
  uint *puVar2;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar1 = *in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cRam80003a28d0003a28);
  pcVar3 = (char *)(param_1 + -1);
  if (pcVar3 == (char *)0x0 || (char)*in_RAX != '\0') {
    *pcVar3 = *pcVar3 + cRam80003a28d0003a28;
    uVar1 = (uint)pcVar4 | uRam00000001478f4df7;
    puVar2 = (uint *)(ulonglong)uVar1;
    pcVar4 = (char *)(param_1 + -2);
    if (pcVar4 == (char *)0x0 || uVar1 == 0) {
      *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL) =
           *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL);
      *pcVar4 = *pcVar4 + (char)(uVar1 >> 8);
      puVar2 = (uint *)(ulonglong)(uVar1 + 0x74050002);
    }
    else {
      *(char *)puVar2 = (char)*puVar2 + (char)uVar1;
      uRam00000001b4524308 = uRam00000001b4524308 & uVar1;
    }
    uVar1 = (uint)puVar2 | *puVar2;
    pcVar4 = (char *)(ulonglong)uVar1;
    pcVar4[0x3d] = pcVar4[0x3d] ^ bVar5;
    pcVar4[(longlong)unaff_RSI * 2 + 0x3d] = pcVar4[(longlong)unaff_RSI * 2 + 0x3d] + unaff_BL;
    *pcVar4 = *pcVar4 + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,(short)param_2);
  if (!SCARRY1((char)uVar1,(char)in_RAX)) {
    *pcVar4 = *pcVar4 + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_2 + 0x4d) = *(undefined1 *)(param_2 + 0x4d);
  uRam00000001a8524384 = uRam00000001a8524384 & (uint)pcVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

