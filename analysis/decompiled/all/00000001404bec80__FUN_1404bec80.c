// Function: FUN_1404bec80
// Addr: 1404bec80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bec80(char param_1,undefined2 param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 *unaff_RBX;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RSI;
  byte in_CF;
  bool bVar4;
  char acStack_57 [23];
  undefined1 *puStack_40;
  undefined8 uStack_10;
  
  out(*unaff_RSI,param_2);
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\x06';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  puStack_40 = &stack0xfffffffffffffff8;
  bVar4 = 0x57a4ffef < uRam00000000a85b0010;
  uVar1 = uRam00000000a85b0010 + 0xa85b0010;
  uRam00000000a85b0010 = uVar1 + in_CF;
  cVar2 = cRamffffffffa85b0010 + '\x10';
  *unaff_RBX = (char)param_2;
  *(char *)(unaff_RSI + 1) = *(char *)(unaff_RSI + 1) + (char)((ushort)param_2 >> 8);
  acStack_57[0] = '\x15';
  acStack_57[1] = '\0';
  acStack_57[2] = '\x1c';
  acStack_57[3] = -0xc;
  acStack_57[4] = -1;
  acStack_57[5] = -1;
  acStack_57[6] = -1;
  acStack_57[7] = -1;
  acStack_57
  [(ulonglong)
   ((int)CONCAT71(0xffffffffa85b00,cVar2 + (bVar4 || CARRY4(uVar1,(uint)in_CF))) + 0xd12be800) * 8]
       = acStack_57
         [(ulonglong)
          ((int)CONCAT71(0xffffffffa85b00,cVar2 + (bVar4 || CARRY4(uVar1,(uint)in_CF))) + 0xd12be800
          ) * 8] + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

