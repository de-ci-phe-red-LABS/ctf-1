# Welcome To The Challenge

### Some Background For This Challenge
> Because of a large data theft at a major corporation, a large number of encrypted passkeys were dumped onto the internet. The targeted corporation, out of concern for their clients, decided to make an oracle available which would check the passkeys by decrypting them, thus checking for frauds.

Given to you is the encrypted __master key__ in the file `task`. Your job is to CTF.

The oracle is available at `https://ctf-iitbhilai.herokuapp.com/oracle`
To interact with the oracle, you need to pass a `content` argument.

Following are a few examples -
- `https://ctf-iitbhilai.herokuapp.com/oracle?content=ESn1Na8jbg_jlUEYKTAnF0x94l_AX-QwC0qrq_X6eO4=`
- `https://ctf-iitbhilai.herokuapp.com/oracle?content=Z0PLVdpHCDlVPAOLAcT2_CxkCnLa0Lp13jgkHsYr0iw=`

### Hints
> Lucky13 Anyone ?
> Serge Vaudenays Padding Oracle.


### Resources
> [Padding Oracle Attack - Robert Heaton](https://robertheaton.com/2013/07/29/padding-oracle-attack/)

### Flag
> flag{BSTLKY13}

## Testing the PoC
 > Suggest using a virtual environment with `python3`
 >
 > `python3 -m venv <virtualenv_dir_loc> && source <virtualenv_dir_loc>/bin/activate`
 
 ### Install Dependencies
 `pip install -r requirements.txt`
 
 ### Running the PoC
 `python exploit.py`
