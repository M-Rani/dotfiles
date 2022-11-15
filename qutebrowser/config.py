# ================================================================================================================================= #
#   ________  ___  ___  _________  _______   ________  ________  ________  ___       __   ________  _______   ________              #
#  |\   __  \|\  \|\  \|\___   ___\\  ___ \ |\   __  \|\   __  \|\   __  \|\  \     |\  \|\   ____\|\  ___ \ |\   __  \             #
#  \ \  \|\  \ \  \\\  \|___ \  \_\ \   __/|\ \  \|\ /\ \  \|\  \ \  \|\  \ \  \    \ \  \ \  \___|\ \   __/|\ \  \|\  \            #
#   \ \  \\\  \ \  \\\  \   \ \  \ \ \  \_|/_\ \   __  \ \   _  _\ \  \\\  \ \  \  __\ \  \ \_____  \ \  \_|/_\ \   _  _\           #
#    \ \  \\\  \ \  \\\  \   \ \  \ \ \  \_|\ \ \  \|\  \ \  \\  \\ \  \\\  \ \  \|\__\_\  \|____|\  \ \  \_|\ \ \  \\  \|          #
#     \ \_____  \ \_______\   \ \__\ \ \_______\ \_______\ \__\\ _\\ \_______\ \____________\____\_\  \ \_______\ \__\\ _\          #
#      \|___| \__\|_______|    \|__|  \|_______|\|_______|\|__|\|__|\|_______|\|____________|\_________\|_______|\|__|\|__|         #
#            \|__|                                                                          \|_________|                            #
#                                                                                                                                   #
#                                                                                                                                   #
#   ________  ________  ________   ________ ___  ________  ___  ___  ________  ________  _________  ___  ________  ________         #
#  |\   ____\|\   __  \|\   ___  \|\  _____\\  \|\   ____\|\  \|\  \|\   __  \|\   __  \|\___   ___\\  \|\   __  \|\   ___  \       #
#  \ \  \___|\ \  \|\  \ \  \\ \  \ \  \__/\ \  \ \  \___|\ \  \\\  \ \  \|\  \ \  \|\  \|___ \  \_\ \  \ \  \|\  \ \  \\ \  \      #
#   \ \  \    \ \  \\\  \ \  \\ \  \ \   __\\ \  \ \  \  __\ \  \\\  \ \   _  _\ \   __  \   \ \  \ \ \  \ \  \\\  \ \  \\ \  \     #
#    \ \  \____\ \  \\\  \ \  \\ \  \ \  \_| \ \  \ \  \|\  \ \  \\\  \ \  \\  \\ \  \ \  \   \ \  \ \ \  \ \  \\\  \ \  \\ \  \    #
#     \ \_______\ \_______\ \__\\ \__\ \__\   \ \__\ \_______\ \_______\ \__\\ _\\ \__\ \__\   \ \__\ \ \__\ \_______\ \__\\ \__\   #
#      \|_______|\|_______|\|__| \|__|\|__|    \|__|\|_______|\|_______|\|__|\|__|\|__|\|__|    \|__|  \|__|\|_______|\|__| \|__|   #
#                                                                                                                                   #
# ================================================================================================================================= #
# Alex J. Carlson

config.load_autoconfig(False)

c.aliases = {
    'q': 'quit', 
    'w': 'session-save', 
    'wq': 'quit --save', 
    'goto-domain': 'open {url:domain}',
    'random':'open ~/.config/startpage/random.html',
    'mpv': 'spawn -v mpv',
    'feh': 'spawn -v feh', 
    'yt-dlp': 'spawn kitty --class="qutebrowser" -T="yt-dlp video download" -1 --instance-group="yt-dlp" -e yt-dlp --all-subs --output "~/Videos/YouTube/%(title)s.%(ext)s"', 
    'yt-dlp-audio': 'spawn kitty --class="qutebrowser" -T="yt-dlp audio download" -1 --instance-group="yt-dlp" -e yt-dlp -x --audio-format mp3 --output "~/Music/YouTube/%(title)s.%(ext)s"', 
    'qr-encode': 'spawn -mu qute-qr --encode', 
    'qr-decode': 'spawn -mu qute-qr --decode', 
    'auto-login': 'spawn --userscript qute-pass --dmenu-invocation dmenu',
}

c.confirm_quit = ['downloads']
c.changelog_after_upgrade = 'minor'

c.backend = 'webengine'
c.content.autoplay = True

config.set('content.cookies.accept', 'all', 'chrome-devtools://*')
config.set('content.cookies.accept', 'all', 'devtools://*')
config.set('content.geolocation', False, 'https://stellarium-web.org')
config.set('content.geolocation', False, 'https://www.google.com')
config.set('content.headers.accept_language', '', 'https://matchmaker.krunker.io/*')
config.set('content.headers.user_agent', 'Mozilla/5.0 ({os_info}) AppleWebKit/{webkit_version} (KHTML, like Gecko) {upstream_browser_key}/{upstream_browser_version} Safari/{webkit_version}', 'https://web.whatsapp.com/')
config.set('content.headers.user_agent', 'Mozilla/5.0 ({os_info}; rv:90.0) Gecko/20100101 Firefox/90.0', 'https://accounts.google.com/*')
config.set('content.headers.user_agent', 'Mozilla/5.0 ({os_info}) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/99 Safari/537.36', 'https://*.slack.com/*')

c.content.blocking.enabled = True
c.content.blocking.method = 'auto'
c.content.blocking.adblock.lists = [
    'https://easylist.to/easylist/easylist.txt', 
    'https://easylist.to/easylist/easyprivacy.txt', 
    'https://easylist.to/easylist/fanboy-social.txt', 
    'https://secure.fanboy.co.nz/fanboy-annoyance.txt', 
    'https://easylist-downloads.adblockplus.org/abp-filters-anti-cv.txt', 
    'https://pgl.yoyo.org/adservers/serverlist.php?showintro=0;hostformat=hosts', 
    'https://github.com/uBlockOrigin/uAssets/raw/master/filters/legacy.txt', 
    'https://github.com/uBlockOrigin/uAssets/raw/master/filters/filters.txt', 
    'https://github.com/uBlockOrigin/uAssets/raw/master/filters/filters-2020.txt', 
    'https://github.com/uBlockOrigin/uAssets/raw/master/filters/filters-2021.txt', 
    'https://github.com/uBlockOrigin/uAssets/raw/master/filters/badware.txt', 
    'https://github.com/uBlockOrigin/uAssets/raw/master/filters/privacy.txt', 
    'https://github.com/uBlockOrigin/uAssets/raw/master/filters/badlists.txt', 
    'https://github.com/uBlockOrigin/uAssets/raw/master/filters/annoyances.txt', 
    'https://github.com/uBlockOrigin/uAssets/raw/master/filters/resource-abuse.txt', 
    'https://github.com/uBlockOrigin/uAssets/raw/master/filters/unbreak.txt', 
    'https://raw.githubusercontent.com/hoshsadiq/adblock-nocoin-list/master/nocoin.txt', 
    'https://www.i-dont-care-about-cookies.eu/abp/', 
    'https://secure.fanboy.co.nz/fanboy-cookiemonster.txt',
    'https://raw.github.com/reek/anti-adblock-killer/master/anti-adblock-killer-filters.txt'
]

config.set('content.images', True, 'chrome-devtools://*')
config.set('content.images', True, 'devtools://*')

c.content.javascript.can_access_clipboard = True
c.content.javascript.can_open_tabs_automatically = False

# Enable javascript
config.set('content.javascript.enabled', True, 'chrome-devtools://*')
config.set('content.javascript.enabled', True, 'devtools://*')
config.set('content.javascript.enabled', True, 'chrome://*/*')
config.set('content.javascript.enabled', True, 'qute://*/*')

# Allow website to capture audio
config.set('content.media.audio_capture', True, 'https://discord.com')

# Allow websites to show notifications.
config.set('content.notifications.enabled', False, 'https://discord.com')
config.set('content.notifications.enabled', False, 'https://old.reddit.com')
config.set('content.notifications.enabled', False, 'https://www.reddit.com')
config.set('content.notifications.enabled', False, 'https://www.sportskeeda.com')
config.set('content.notifications.enabled', False, 'https://www.tiktok.com')
config.set('content.notifications.enabled', False, 'https://www.youtube.com')
config.set('content.notifications.enabled', False, 'https://vsthemes.org')

# Allow pdf.js to view PDF files in the browser. Note that the files can
c.content.pdfjs = True

# Allow websites to register protocol handlers via
# `navigator.registerProtocolHandler`.
config.set('content.register_protocol_handler', True, 'https://mail.google.com?extsrc=mailto&url=%25s')

# List of user stylesheet filenames to use.
c.content.user_stylesheets = 'user.css'

# Height (in pixels or as percentage of the window) of the completion.
c.completion.height = '20%'

# A list of patterns which should not be shown in the history. 
c.completion.web_history.exclude = [
    '*://duckduckgo.com/*', 
    '*://www.google.com/*', 
    'https://www.reddit.com/*/search', 
    'qute://pdfjs/*', 
    'file:///*'
]

# Where to show the downloaded files.
c.downloads.position = 'top'

# Duration (in milliseconds) to wait before removing finished downloads.
c.downloads.remove_finished = 5000

# Editor
c.editor.command = ['kitty', '-e', 'nvim', '{file}', '-c', 'normal {line}G{column0}l']
c.editor.encoding = 'utf-8'

# Hints
c.hints.border = '1px solid #1D2021'
c.hints.padding = {'bottom': 0, 'left': 2, 'right': 2, 'top': 0}
c.hints.radius = 0
c.hints.chars = 'asdfghjkl'
c.hints.min_chars = 1
c.hints.scatter = False
c.hints.uppercase = False

# Statusbar
c.statusbar.show = 'always'

# Tabs
c.tabs.favicons.scale = 1
c.tabs.position = 'top'
c.tabs.show = 'multiple'
c.tabs.title.alignment = 'left'
c.tabs.title.format_pinned = '{perc}'
c.tabs.title.format = '{audio}{current_title}{perc}'
c.tabs.width = 10
c.tabs.wrap = True

yags = '/home/alex/.config/startpage/index.html'
c.url.default_page = yags
c.url.open_base_url = True
c.url.searchengines = {'DEFAULT': 'https://start.duckduckgo.com/?key=f0dd4f8786753d482df6fc28e332073b32ecbe3961b7018c6cf37b8a04f6611fae0b64bee819acd2c6cfcca481b0108932ccbc3b8dababe75e9ee0e998bbe1db?t=disconnect&x=%2Fhtml&q={}&ia=about'}

# Page(s) to open at the start.
# Type: List of FuzzyUrl, or FuzzyUrl
c.url.start_pages = yags

# Format to use for the window title. The same placeholders like for
# `tabs.title.format` are defined.
# Type: FormatString
# c.window.title_format = 'qutebrowser{title_sep}{current_title}{private}{perc}'
c.window.title_format = '{current_title}{private}{perc} - Qutebrowser'

# Default zoom level.
# Type: Perc
c.zoom.default = '90%'

# Available zoom levels.
# Type: List of Perc
c.zoom.levels = ['25%', '33%', '50%', '67%', '75%', '90%', '100%', '110%', '125%', '150%', '175%', '200%', '250%', '300%', '400%', '500%']

# Number of zoom increments to divide the mouse wheel movements to.
# Type: Int
c.zoom.mouse_divider = 512

# Qutebrowser Colorscheme
config.source('themes/default/base16-gruvbox-dark-medium.config.py')

# Dark Mode
c.colors.webpage.preferred_color_scheme = 'dark'
c.colors.webpage.darkmode.enabled = False
c.colors.webpage.darkmode.algorithm = 'lightness-cielab'
c.colors.webpage.darkmode.policy.images = 'smart'
c.colors.webpage.darkmode.threshold.text = 0
c.colors.webpage.darkmode.grayscale.all = False

# Default font size to use.
font_size = 8

c.fonts.hints = f'{font_size}pt Terminus'
c.fonts.statusbar = f'{font_size}pt Terminus'
c.fonts.downloads = f'{font_size}pt Terminus'
c.fonts.contextmenu = f'{font_size}pt Terminus'
c.fonts.tabs.selected = f'{font_size}pt Terminus'
c.fonts.tabs.unselected = f'{font_size}pt Terminus'
c.fonts.completion.entry = f'{font_size}pt Terminus'
c.fonts.completion.category = f'{font_size}pt Terminus'

# c.fonts.default_size = '8pt'
# c.fonts.hints = '8pt'

# Bindings for normal mode
config.bind(',E', ':qr-encode {url:pretty}')
config.bind(',M', ':mpv {url:pretty}')
config.bind(',P', ':auto-login --password-only')
config.bind(',Q', ':qr-decode {url:pretty}')
config.bind(',X', ':ytdl-audio {url:pretty}')
config.bind(',Z', ':ytdl {url:pretty}')
config.bind(',p', ':auto-login')
config.bind(';C', 'hint all yank')
config.bind(';D', 'hint media download')
config.bind(';c', 'hint media yank')
config.bind(';e', 'hint links run :qr-encode {hint-url}')
config.bind(';m', 'hint links run :mpv {hint-url}')
config.bind(';q', 'hint media run :qr-decode {hint-url}')
config.bind(';x', 'hint links run :ytdl-audio {hint-url}')
config.bind(';z', 'hint links run :ytdl {hint-url}')
config.bind('<Ctrl+Shift+Tab>', 'tab-prev')
config.bind('<Ctrl+Shift+f>', 'hint links run :open -p -s {hint-url}')
config.bind('<Ctrl+Shift+h>', ':goto-domain')
config.bind('<Ctrl+Shift+n>', ':open -p')
config.bind('<Ctrl+Tab>', 'tab-next')
config.bind('<Ctrl+p>', ':tab-pin')
config.bind('<Ctrl+q>', ':wq')
config.bind('<Ctrl+s>', ':w')
config.bind('<Alt+w>', 'fake-key f;; later 100 fullscreen')
config.bind('<Alt+t>', 'fake-key t')
config.bind('F', 'hint all tab-fg')
config.bind('J', 'tab-prev')
config.bind('K', 'tab-next')
config.unbind('ZQ')
config.unbind('ZZ')
config.bind('xb', 'config-cycle statusbar.show always in-mode')
config.bind('xt', 'config-cycle tabs.show multiple switching')
config.bind('xx', 'config-cycle statusbar.show always in-mode;; config-cycle tabs.show multiple switching')
config.bind('zh', 'history-clear')
config.bind('zz', 'clear-messages;; download-clear')
