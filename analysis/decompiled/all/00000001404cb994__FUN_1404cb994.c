// Function: FUN_1404cb994
// Addr: 1404cb994
// Size: 1 bytes


void FUN_1404cb994(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  undefined4 in_EAX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  out(param_2,in_EAX);
  *unaff_RDI = *unaff_RSI;
  cRam000000000021004c = cRam000000000021004c + 'L';
  unaff_RDI[1] = unaff_RSI[1];
  cRam000000000021004c = cRam000000000021004c + 'L';
  unaff_RDI[0x36] = unaff_RDI[0x36] + 'L';
  cRam000000013b00688e = cRam000000013b00688e + '4';
  cVar1 = in(param_2);
  *param_4 = *param_4 + cVar1;
  sysret();
  return;
}

