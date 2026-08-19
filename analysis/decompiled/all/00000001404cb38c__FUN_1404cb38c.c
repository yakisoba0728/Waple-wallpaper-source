// Function: FUN_1404cb38c
// Addr: 1404cb38c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb38c(longlong param_1,ushort param_2)

{
  char cVar1;
  uint uVar2;
  uint *in_RAX;
  char *pcVar3;
  uint *puVar4;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char acStack_8 [8];
  
  cVar1 = (char)(param_2 >> 8);
  unaff_RDI[(longlong)in_RAX] = unaff_RDI[(longlong)in_RAX] + cVar1;
  *(char *)((longlong)in_RAX + param_1) =
       *(char *)((longlong)in_RAX + param_1) + (char)((ulonglong)in_RAX >> 8);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)param_2;
  unaff_RDI[param_1] = unaff_RDI[param_1] + cVar1;
  *(char *)((longlong)in_RAX + -9) = *(char *)((longlong)in_RAX + -9) + cVar1;
  uVar2 = (uint)in_RAX ^ *in_RAX;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),CONCAT11(0xf7,(char)uVar2));
  uVar2 = uVar2 ^ *(uint *)(ulonglong)uVar2;
  acStack_8[0] = -0x4e;
  acStack_8[1] = 'L';
  acStack_8[2] = '\0';
  acStack_8[3] = '!';
  acStack_8[4] = '\0';
  acStack_8[5] = '\0';
  acStack_8[6] = '\0';
  acStack_8[7] = '\0';
  cVar1 = (char)uVar2 + '\x02';
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
  acStack_8[(longlong)unaff_RSI] = acStack_8[(longlong)unaff_RSI] + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  param_2 = param_2 & 0xff;
  out(param_2,cVar1);
  *unaff_RDI = *unaff_RSI;
  pcVar3 = (char *)func_0x0001406db407();
  *pcVar3 = *pcVar3 + (char)pcVar3;
  out(param_2 & 0xff,(char)pcVar3);
  unaff_RDI[1] = unaff_RSI[1];
  puVar4 = (uint *)func_0x0001564db417();
  *puVar4 = *puVar4 | (uint)puVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

