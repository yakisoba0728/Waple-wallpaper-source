// Function: FUN_140418c60
// Addr: 140418c60
// Size: 454 bytes


char FUN_140418c60(uint param_1)

{
  bool bVar1;
  
  if (param_1 < 0x4e626175) {
    if (param_1 == 0x4e626174) {
      return '\x05';
    }
    if (param_1 < 0x48756e68) {
      if (param_1 == 0x48756e67) {
        return '\0';
      }
      if (param_1 == 0x43707274) {
        return '\x05';
      }
      if (param_1 == 0x41646c6d) {
        return '\x05';
      }
      if (param_1 == 0x41726162) {
        return '\x05';
      }
      if (param_1 == 0x41726d69) {
        return '\x05';
      }
      if (param_1 == 0x41767374) {
        return '\x05';
      }
      if (param_1 == 0x43687273) {
        return '\x05';
      }
      if (param_1 == 0x456c796d) {
        return '\x05';
      }
      if (param_1 == 0x47617261) {
        return '\x05';
      }
      if (param_1 == 0x48617472) {
        return '\x05';
      }
      bVar1 = param_1 == 0x48656272;
    }
    else if (param_1 < 0x4d616e6a) {
      if (param_1 == 0x4d616e69) {
        return '\x05';
      }
      if (param_1 == 0x4974616c) {
        return '\0';
      }
      if (param_1 == 0x4b686172) {
        return '\x05';
      }
      if (param_1 == 0x4c796469) {
        return '\x05';
      }
      bVar1 = param_1 == 0x4d616e64;
    }
    else {
      if (param_1 == 0x4d656e64) {
        return '\x05';
      }
      if (param_1 == 0x4d657263) {
        return '\x05';
      }
      if (param_1 == 0x4d65726f) {
        return '\x05';
      }
      bVar1 = param_1 == 0x4e617262;
    }
  }
  else if (param_1 < 0x52756e73) {
    if (param_1 == 0x52756e72) {
      return '\0';
    }
    if (param_1 == 0x50686c69) {
      return '\x05';
    }
    if (param_1 == 0x4e6b6f6f) {
      return '\x05';
    }
    if (param_1 == 0x4f726b68) {
      return '\x05';
    }
    if (param_1 == 0x4f756772) {
      return '\x05';
    }
    if (param_1 == 0x50616c6d) {
      return '\x05';
    }
    if (param_1 == 0x50686c70) {
      return '\x05';
    }
    if (param_1 == 0x50686e78) {
      return '\x05';
    }
    if (param_1 == 0x50727469) {
      return '\x05';
    }
    bVar1 = param_1 == 0x526f6867;
  }
  else {
    if (0x536f676f < param_1) {
      if (param_1 == 0x53797263) {
        return '\x05';
      }
      if (param_1 != 0x54666e67) {
        if (param_1 == 0x54686161) {
          return '\x05';
        }
        return (param_1 == 0x59657a69) + '\x04';
      }
      return '\0';
    }
    if (param_1 == 0x536f676f) {
      return '\x05';
    }
    if (param_1 == 0x53616d72) {
      return '\x05';
    }
    if (param_1 == 0x53617262) {
      return '\x05';
    }
    if (param_1 == 0x53696474) {
      return '\x05';
    }
    bVar1 = param_1 == 0x536f6764;
  }
  if (bVar1) {
    return '\x05';
  }
  return '\x04';
}

